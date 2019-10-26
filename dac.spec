Name:          simple_dac
Summary:       Simple program to enable/disable Linux devices
Version:       1.0.0
Release:       1.0
License:       MIT
Group:         System/Management
Source:        %{name}-%{version}.tar.gz
BuildRoot:     %{_tmppath}/%{name}-%{version}-build
BuildRequires:	qt

%description
This Program Controls to Access System devices.

%prep
%setup -q

%build
make 

%install
mkdir -p %{buildroot}/etc/init.d
mkdir -p %{buildroot}/usr/local/bin
cp  ui %{buildroot}/usr/local/bin/
cp  dac %{buildroot}/etc/init.d/
cp dacconfig.conf %{buildroot}/etc/
#%makeinstall DESTDIR=%{buildroot} LIB=%{_lib} 

%post

%postun

%files
%defattr(-,root,root)
/etc/init.d/dac
/etc/dacconfig.conf
/usr/local/bin/dac
