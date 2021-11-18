.PHONY: clean All

All:
	@echo "----------Building project:[ LeetCode - Debug ]----------"
	@cd "C:\Users\Emri.Biran\Documents\LeetCode\LeetCode" && "$(MAKE)" -f  "LeetCode.mk"
clean:
	@echo "----------Cleaning project:[ LeetCode - Debug ]----------"
	@cd "C:\Users\Emri.Biran\Documents\LeetCode\LeetCode" && "$(MAKE)" -f  "LeetCode.mk" clean
