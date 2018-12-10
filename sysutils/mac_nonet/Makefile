# Created by: Jov <amutu@amutu.com>
# $FreeBSD: head/sysutils/mac_nonet/Makefile 486720 2018-12-05 20:01:10Z linimon $

PORTNAME=	mac_nonet
DISTVERSION=	g20150821
CATEGORIES=	sysutils
PKGNAMESUFFIX=	-kmod

MAINTAINER=	ports@FreeBSD.org
COMMENT=	MAC policy to disable access to networking for certain group

LICENSE=	BSD2CLAUSE
LICENSE_FILE=	${WRKSRC}/LICENSE

USES=		kmod uidfix

USE_GITHUB=	yes
GH_ACCOUNT=	pbiernacki
GH_TAGNAME=	f7e008a

PLIST_FILES=	${KMODDIR}/mac_nonet.ko

.include <bsd.port.mk>
