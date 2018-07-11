# Created by: Emanuel Haupt <ehaupt@FreeBSD.org>
# $FreeBSD: head/dns/utdns/Makefile 474427 2018-07-11 07:57:42Z ehaupt $

PORTNAME=	utdns
PORTVERSION=	1.1
DISTVERSIONPREFIX=	v
CATEGORIES=	dns

MAINTAINER=	ehaupt@FreeBSD.org
COMMENT=	Proxy UDP/DNS to TCP/DNS

LICENSE=	GPLv3

USES=		autoreconf
USE_GITHUB=	yes
GNU_CONFIGURE=	yes
USE_RC_SUBR=	${PORTNAME}
SUB_LIST=	PORTNAME=${PORTNAME}

GH_ACCOUNT=	rahra

CFLAGS+=	-DSOCK_NONBLOCK=1

PLIST_FILES=	bin/utdns

.include <bsd.port.mk>
