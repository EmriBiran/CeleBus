.PHONY: clean All

All:
	@echo "----------Building project:[ CeleBus - Debug ]----------"
	@cd "Tests" && "$(MAKE)" -f  "CeleBus.mk"
clean:
	@echo "----------Cleaning project:[ CeleBus - Debug ]----------"
	@cd "Tests" && "$(MAKE)" -f  "CeleBus.mk" clean
