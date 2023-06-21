# ESP32 Pushbutton Counter

Counts the number of times a pushbutton is pressed, and displays the count in the serial monitor.

Includes an [automated test scenario](./button.test.yaml) that simulates the button presses and verifies the counter value.

Use [Wokwi](https://marketplace.visualstudio.com/items?itemName=wokwi.wokwi-vscode) to simulate this project, and the [Wokwi CLI](https://github.com/wokwi/wokwi-cli) to run the automated test.

## Building

This is a [PlatformIO](https://platformio.org) project. To build it, [install PlatformIO](https://docs.platformio.org/en/latest/core/installation/index.html), and then run the following command:

```
pio run
```

## Simulate the project

To simulate this project, install [Wokwi for VS Code](https://marketplace.visualstudio.com/items?itemName=wokwi.wokwi-vscode). Open the project directory in Visual Studio Code, press **F1** and select "Wokwi: Start Simulator".

## Run in wokwi-cli

To run the automated test scenario, download the [Wokwi CLI](https://github.com/wokwi/wokwi-cli/releases/latest). Create a [Wokwi CLI token](https://wokwi.com/dashboard/ci) and set it in the `WOKWI_CLI_TOKEN` environment variable. Then run the following command:

Linux/Mac:

```bash
export WOKWI_CLI_TOKEN="your token goes here"
wokwi-cli --scenario button.test.yaml .
```

Windows:

```powershell
$env:WOKWI_CLI_TOKEN="your token goes here"
wokwi-cli --scenario button.test.yaml .
```
