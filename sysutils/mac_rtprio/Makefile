# Created by: Jov <amutu@amutu.com>
# $FreeBSD: head/sysutils/mac_rtprio/Makefile 486720 2018-12-05 20:01:10Z linimon $

PORTNAME=	mac_rtprio
DISTVERSION=	g20170417
CATEGORIES=	sysutils
PKGNAMESUFFIX=	-kmod

MAINTAINER=	ports@FreeBSD.org
COMMENT=	MAC policy to manage access for setting realtime priorities by GID

LICENSE=	BSD2CLAUSE
LICENSE_FILE=	${WRKSRC}/LICENSE

USES=		kmod uidfix

USE_GITHUB=	yes
GH_ACCOUNT=	pbiernacki
GH_TAGNAME=	3ace584

PLIST_FILES=	${KMODDIR}/mac_rtprio.ko

.include <bsd.port.mk>
