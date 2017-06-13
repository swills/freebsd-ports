# Created by: Rink Springer <rink@FreeBSD.org>
# $FreeBSD: head/www/p5-ClearSilver/Makefile 412351 2016-04-01 14:33:55Z mat $

PORTNAME=	ClearSilver
PORTVERSION=	0.10.5
PORTREVISION=	2
CATEGORIES=	www perl5
MASTER_SITES=	http://www.clearsilver.net/downloads/
PKGNAMEPREFIX=	p5-
DISTNAME=	${PORTNAME:tl}-${PORTVERSION}

MAINTAINER=	perl@FreeBSD.org
COMMENT=	Perl bindings for fast and powerful template system

BUILD_DEPENDS=	${LOCALBASE}/lib/libneo_cs.a:www/clearsilver

USES=		perl5
USE_PERL5=	configure
CONFIGURE_ARGS=	INC="-I${LOCALBASE}/include/ClearSilver"

WRKSRC=		${WRKDIR}/${DISTNAME}/perl

.include <bsd.port.mk>
