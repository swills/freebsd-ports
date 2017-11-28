# Created by: Ask Bjoern Hansen <ask@valueclick.com>
# $FreeBSD: head/www/http_load/Makefile 455001 2017-11-27 23:13:58Z dbaio $

PORTNAME=	http_load
PORTVERSION=	20160309
CATEGORIES=	www
MASTER_SITES=	http://www.acme.com/software/http_load/
DISTNAME=	${PORTNAME}-09Mar2016

MAINTAINER=	marcel@herrbischoff.com
COMMENT=	Multiprocessing http performance test client

LICENSE=	BSD2CLAUSE

USES=		uidfix
MAKEFILE=	${FILESDIR}/Makefile.bsd

PLIST_FILES=	bin/http_load \
		man/man1/http_load.1.gz

.ifndef NO_OPENSSL
USES+=	ssl
.endif

.include <bsd.port.mk>
