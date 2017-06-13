# Created by: Dermot Tynan <dtynan@kalopa.com>
# $FreeBSD: head/finance/beanie/Makefile 428144 2016-12-08 17:40:41Z tijl $

PORTNAME=	beanie
PORTVERSION=	0.8.2
PORTREVISION=	1
CATEGORIES=	finance
MASTER_SITES=	SF

MAINTAINER=	ports@FreeBSD.org
COMMENT=	Open Source accounting system

LICENSE=	GPLv2+
LICENSE_FILE=	${WRKSRC}/COPYING

BUILD_DEPENDS=	dbow:databases/dbow
LIB_DEPENDS=	libexpat.so:textproc/expat2

LATE_INSTALL_ARGS=	BEANIEROOT="${STAGEDIR}${PREFIX}/beanie"
MAKE_JOBS_UNSAFE=	yes

post-patch:
	@${CP} ${WRKSRC}/beanie.mk.sample ${WRKSRC}/beanie.mk
	@${CP} ${WRKSRC}/tmac/lhead.sample.r ${WRKSRC}/tmac/lhead.r

.include <bsd.port.mk>
