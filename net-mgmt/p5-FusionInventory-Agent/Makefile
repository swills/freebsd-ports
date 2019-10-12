# Created by: Veniamin Gvozdikov <vg@FreeBSD.org>
# $FreeBSD$

PORTNAME=	FusionInventory-Agent
PORTVERSION=	2.5.1
CATEGORIES=	net-mgmt
MASTER_SITES=	https://github.com/fusioninventory/fusioninventory-agent/releases/download/${DISTVERSION}/
PKGNAMEPREFIX=	p5-

MAINTAINER=	freebsd@simweb.ch
COMMENT=	Agent for OCS Inventory server and FusionInventory for GLPI servers

LICENSE=	GPLv2
LICENSE_FILE=	${WRKSRC}/LICENSE

BUILD_DEPENDS=	${RUN_DEPENDS}
RUN_DEPENDS=	p5-File-Which>=0:sysutils/p5-File-Which \
		p5-HTTP-Daemon>=0:www/p5-HTTP-Daemon \
		p5-libwww>=0:www/p5-libwww \
		p5-Net-IP>=0:net-mgmt/p5-Net-IP \
		p5-Proc-Daemon>=0:devel/p5-Proc-Daemon \
		p5-Proc-PID-File>=0:devel/p5-Proc-PID-File \
		p5-UNIVERSAL-require>=0:devel/p5-UNIVERSAL-require \
		p5-Text-Template>=0:textproc/p5-Text-Template \
		p5-XML-TreePP>=0:textproc/p5-XML-TreePP \
		p5-XML-XPath>=0:textproc/p5-XML-XPath
TEST_DEPENDS=	p5-File-Copy-Recursive>=0:devel/p5-File-Copy-Recursive \
		p5-HTTP-Proxy>=0:www/p5-HTTP-Proxy \
		p5-HTTP-Server-Simple>=0:www/p5-HTTP-Server-Simple \
		p5-HTTP-Server-Simple-Authen>=0:www/p5-HTTP-Server-Simple-Authen \
		p5-IO-Socket-SSL>=0:security/p5-IO-Socket-SSL \
		p5-IO-Capture>=0:devel/p5-IO-Capture \
		p5-IPC-Run>=0:devel/p5-IPC-Run \
		p5-JSON>=0:converters/p5-JSON \
		p5-Net-SNMP>=0:net-mgmt/p5-Net-SNMP \
		p5-Test-Compile>=0:devel/p5-Test-Compile \
		p5-Test-Deep>=0:devel/p5-Test-Deep \
		p5-Test-Exception>=0:devel/p5-Test-Exception \
		p5-Test-MockModule>=0:devel/p5-Test-MockModule \
		p5-Test-MockObject>=0:devel/p5-Test-MockObject \
		p5-Test-NoWarnings>=0:devel/p5-Test-NoWarnings

OPTIONS_DEFINE=		CUPS DMIDECODE DEPLOY NETDISC NETINV PCIUTILS \
			SSL VMWARE WOL ZLIB
OPTIONS_DEFAULT=	DMIDECODE PCIUTILS ZLIB
OPTIONS_SUB=	yes

DEPLOY_DESC=	Deployment task
DMIDECODE_DESC=	Dmidecode hardware information
NETDISC_DESC=	Network discovery task
NETINV_DESC=	Network inventory task
PCIUTILS_DESC=	Pciutils hardware information
VMWARE_DESC=	VMware hypervisor remote inventory task
WOL_DESC=	Wake on LAN task
ZLIB_DESC=	Zlib compression

NO_ARCH=	yes
USES=		gmake perl5
USE_PERL5=	configure
USE_RC_SUBR=	fusioninventory

CUPS_RUN_DEPENDS=	p5-Net-CUPS>=0.6:print/p5-Net-CUPS
DEPLOY_RUN_DEPENDS=	p5-Archive-Extract>=0:archivers/p5-Archive-Extract \
			p5-SHA>=0:security/p5-SHA \
			p5-File-Copy-Recursive>=0:devel/p5-File-Copy-Recursive \
			p5-JSON>=0:converters/p5-JSON \
			p5-Net-Ping>=2.67:net/p5-Net-Ping \
			p5-Parallel-ForkManager>=0:devel/p5-Parallel-ForkManager \
			p5-URI-Escape-XS>=0:www/p5-URI-Escape-XS
# Wants URI::Escape, ports tree has URI::Escape::XS, seems drop-in replacement
DMIDECODE_RUN_DEPENDS=	dmidecode>=3.2:sysutils/dmidecode
NETDISC_RUN_DEPENDS=	p5-Net-NBName>=0:net/p5-Net-NBName \
			p5-Net-Ping>=2.67:net/p5-Net-Ping \
			p5-Net-SNMP>=0:net-mgmt/p5-Net-SNMP \
			p5-Thread-Queue>=0:devel/p5-Thread-Queue
NETINV_RUN_DEPENDS=	p5-Crypt-DES>=0:security/p5-Crypt-DES \
			p5-Net-SNMP>=0:net-mgmt/p5-Net-SNMP \
			p5-Thread-Queue>=0:devel/p5-Thread-Queue
PCIUTILS_RUN_DEPENDS+=	lspci:sysutils/pciutils
SSL_RUN_DEPENDS=	p5-IO-Socket-SSL>=1.14:security/p5-IO-Socket-SSL \
			p5-LWP-Protocol-https>=0:www/p5-LWP-Protocol-https
WOL_RUN_DEPENDS=	p5-Net-Write>=0:net/p5-Net-Write

post-patch:
	@${FIND} ${WRKSRC} -type f \( -name '*.orig' \) -delete

.include <bsd.port.mk>
