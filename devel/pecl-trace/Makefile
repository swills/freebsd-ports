# Created by: Gasol Wu <gasol.wu@gmail.com>
# $FreeBSD: head/devel/pecl-trace/Makefile 438175 2017-04-10 15:08:47Z mat $

PORTNAME=	trace
PORTVERSION=	1.0.0
CATEGORIES=	devel

MAINTAINER=	gasol.wu@gmail.com
COMMENT=	Low-overhead tracing tool for PHP

LICENSE=	APACHE20

WRKSRC_SUBDIR=	extension

USES=		gmake php:pecl
PLIST_FILES=	bin/phptrace

pre-install:
	cd ${WRKSRC} && \
		${MAKE_CMD} install-cli PHP_TRACE_BINDIR=${STAGEDIR}${PREFIX}/bin

post-install:
	${STRIP_CMD} ${STAGEDIR}${PREFIX}/bin/phptrace

.include <bsd.port.mk>
