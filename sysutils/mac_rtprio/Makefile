# Created by: Jov <amutu@amutu.com>
# $FreeBSD: head/sysutils/mac_rtprio/Makefile 464220 2018-03-12 06:35:55Z tobik $

PORTNAME=	mac_rtprio
DISTVERSION=	g20170417
CATEGORIES=	sysutils
PKGNAMESUFFIX=	-kmod

MAINTAINER=	amutu@amutu.com
COMMENT=	MAC policy to manage access for setting realtime priorities by GID

LICENSE=	BSD2CLAUSE
LICENSE_FILE=	${WRKSRC}/LICENSE

USES=		kmod uidfix

USE_GITHUB=	yes
GH_ACCOUNT=	pbiernacki
GH_TAGNAME=	3ace584

PLIST_FILES=	${KMODDIR}/mac_rtprio.ko

.include <bsd.port.mk>
