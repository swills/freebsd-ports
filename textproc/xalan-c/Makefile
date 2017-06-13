# Created by: Roger Leigh <rleigh@codelibre.net>
# $FreeBSD: head/textproc/xalan-c/Makefile 412349 2016-04-01 14:25:16Z mat $

PORTNAME=	xalan-c
PORTVERSION=	1.11
CATEGORIES=	textproc
MASTER_SITES=	APACHE/xalan/xalan-c/sources
DISTNAME=	xalan_c-${PORTVERSION}-src

MAINTAINER=	rleigh@codelibre.net
COMMENT=	XSLT processor from the Apache XML Project

LICENSE=	APACHE20

LIB_DEPENDS=	libxerces-c.so:textproc/xerces-c3

GNU_CONFIGURE=	yes
USES=		gmake libtool localbase pathfix
USE_LDCONFIG=	yes
MAKE_JOBS_UNSAFE=	yes

CONFIGURE_ENV=	XALANCROOT=${WRKSRC} XALAN_LOCALE_SYSTEM=inmem \
		XALAN_LOCALE=en_US
MAKE_ENV=	${CONFIGURE_ENV}
WRKSRC=		${WRKDIR}/${PORTNAME}-${PORTVERSION}
WRKSRC_SUBDIR=	c

.include <bsd.port.mk>
