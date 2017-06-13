# Created by: mat
# $FreeBSD: head/www/p5-MasonX-Profiler/Makefile 412351 2016-04-01 14:33:55Z mat $

PORTNAME=	MasonX-Profiler
PORTVERSION=	0.06
PORTREVISION=	2
CATEGORIES=	www perl5
MASTER_SITES=	CPAN
PKGNAMEPREFIX=	p5-

MAINTAINER=	perl@FreeBSD.org
COMMENT=	Mason per-component profiler

BUILD_DEPENDS=	p5-HTML-Mason>=0:www/p5-HTML-Mason
RUN_DEPENDS:=	${BUILD_DEPENDS}

USES=		perl5
USE_PERL5=	configure

.include <bsd.port.mk>
