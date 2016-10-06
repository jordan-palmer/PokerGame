<?xml version='1.0' encoding='UTF-8'?>
<Project Type="Project" LVVersion="16008000">
	<Item Name="My Computer" Type="My Computer">
		<Property Name="server.app.propertiesEnabled" Type="Bool">true</Property>
		<Property Name="server.control.propertiesEnabled" Type="Bool">true</Property>
		<Property Name="server.tcp.enabled" Type="Bool">false</Property>
		<Property Name="server.tcp.port" Type="Int">0</Property>
		<Property Name="server.tcp.serviceName" Type="Str">My Computer/VI Server</Property>
		<Property Name="server.tcp.serviceName.default" Type="Str">My Computer/VI Server</Property>
		<Property Name="server.vi.callsEnabled" Type="Bool">true</Property>
		<Property Name="server.vi.propertiesEnabled" Type="Bool">true</Property>
		<Property Name="specify.custom.address" Type="Bool">false</Property>
		<Item Name="Controls" Type="Folder">
			<Item Name="Pedestrian Light Display.ctl" Type="VI" URL="../Controls/Pedestrian Light Display.ctl"/>
			<Item Name="Traffic Light Display.ctl" Type="VI" URL="../Controls/Traffic Light Display.ctl"/>
			<Item Name="Traffic Light States.ctl" Type="VI" URL="../Controls/Traffic Light States.ctl"/>
		</Item>
		<Item Name="VI&apos;s" Type="Folder">
			<Item Name="Basic Pedestrian Lights.vi" Type="VI" URL="../VI&apos;s/Basic Pedestrian Lights.vi"/>
			<Item Name="Basic Traffic Lights.vi" Type="VI" URL="../VI&apos;s/Basic Traffic Lights.vi"/>
		</Item>
		<Item Name="Dependencies" Type="Dependencies"/>
		<Item Name="Build Specifications" Type="Build"/>
	</Item>
</Project>
