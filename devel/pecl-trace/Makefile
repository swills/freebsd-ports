# Created by: Gasol Wu <gasol.wu@gmail.com>
# $FreeBSD: head/devel/pecl-trace/Makefile 456296 2017-12-14 13:57:28Z tz $

PORTNAME=	trace
PORTVERSION=	1.0.0
CATEGORIES=	devel

MAINTAINER=	gasol.wu@gmail.com
COMMENT=	Low-overhead tracing tool for PHP

LICENSE=	APACHE20

WRKSRC_SUBDIR=	extension

USES=		gmake php:pecl
IGNORE_WITH_PHP=	71 72
PLIST_FILES=	bin/phptrace

pre-install:
	cd ${WRKSRC} && \
		${MAKE_CMD} install-cli PHP_TRACE_BINDIR=${STAGEDIR}${PREFIX}/bin

post-install:
	${STRIP_CMD} ${STAGEDIR}${PREFIX}/bin/phptrace

.include <bsd.port.mk>
