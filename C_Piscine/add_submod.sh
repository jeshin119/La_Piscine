#!/bin/bash
submodules=(
	"./c01=https://github.com/Shin-Jeong-Su/La_Pisine/C_Piscine"
	"./c02=https://github.com/Shin-Jeong-Su/La_Pisine/C_Piscine"
	"./c03=https://github.com/Shin-Jeong-Su/La_Pisine/C_Piscine"
	"./c07=https://github.com/Shin-Jeong-Su/La_Pisine/C_Piscine"
	"./c09=https://github.com/Shin-Jeong-Su/La_Pisine/C_Piscine"
	"./rush00=https://github.com/Shin-Jeong-Su/La_Pisine/C_Piscine"
)

for submodule in "${submodules[@]}"; do
	IFS="=" read -r path url <<< "$submodule"
	git rm --cached -f "$path/."
	git submodule add "$url" "$path" && git add "$path"
done
https://github.com/Shin-Jeong-Su/La_Pisine
