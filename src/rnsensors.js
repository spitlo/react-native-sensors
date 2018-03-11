import { NativeModules, DeviceEventEmitter } from "react-native";
const { Gyroscope: GyroNative, Accelerometer: AccNative, Magnetometer: MagNative } = NativeModules;

const handle = {
	Accelerometer: AccNative,
	Gyroscope: GyroNative,
	Magnetometer: MagNative
};

const RNSensors = {
	start: function(type, updateInterval) {
		const api = handle[type];
		api.setUpdateInterval(updateInterval);
		api.startUpdates();
	},

	isAvailable: function(type) {
		const api = handle[type];
		return api.isAvailable();
	},

	stop: function(type) {
		const api = handle[type];
		api.stopUpdates();
	}
};

export default RNSensors;
