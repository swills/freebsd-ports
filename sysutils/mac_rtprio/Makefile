# Created by: Jov <amutu@amutu.com>
# $FreeBSD: head/sysutils/mac_rtprio/Makefile 471981 2018-06-08 04:32:38Z linimon $

PORTNAME=	mac_rtprio
DISTVERSION=	g20170417
CATEGORIES=	sysutils
PKGNAMESUFFIX=	-kmod

MAINTAINER=	amutu@amutu.com
COMMENT=	MAC policy to manage access for setting realtime priorities by GID

LICENSE=	BSD2CLAUSE
LICENSE_FILE=	${WRKSRC}/LICENSE

BROKEN_powerpc64=	fails to build: make[1]: don't know how to make /usr/src/sys/tools/vnode_if.awk

USES=		kmod uidfix

USE_GITHUB=	yes
GH_ACCOUNT=	pbiernacki
GH_TAGNAME=	3ace584

PLIST_FILES=	${KMODDIR}/mac_rtprio.ko

.include <bsd.port.mk>
