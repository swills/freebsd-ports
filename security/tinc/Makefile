# Created by: ijliao
# $FreeBSD: head/security/tinc/Makefile 481663 2018-10-09 20:54:47Z dinoex $

PORTNAME=	tinc
PORTVERSION=	1.0.35
CATEGORIES=	security
MASTER_SITES=	https://www.tinc-vpn.org/packages/ \
		http://www.tinc-vpn.org/packages/

MAINTAINER=	dinoex@FreeBSD.org
COMMENT=	Virtual Private Network (VPN) daemon

LICENSE=	GPLv3

LIB_DEPENDS=	liblzo2.so:archivers/lzo2

USES=		cpe ssl makeinfo
CPE_VENDOR=	tinc-vpn
GNU_CONFIGURE=	yes
CPPFLAGS+=	-I${LOCALBASE}/include
LDFLAGS+=	-L${LOCALBASE}/lib
CONFIGURE_ARGS=	--localstatedir=/var
USE_RC_SUBR=	tincd
INFO=		tinc
PLIST_FILES=	sbin/tincd \
		man/man5/tinc.conf.5.gz man/man8/tincd.8.gz

.include <bsd.port.mk>
