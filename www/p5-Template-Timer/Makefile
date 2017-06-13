# Created by: Lars Thegler <lth@FreeBSD.org>
# $FreeBSD: head/www/p5-Template-Timer/Makefile 437950 2017-04-07 18:50:22Z lth $

PORTNAME=	Template-Timer
PORTVERSION=	1.00
PORTREVISION=	2
CATEGORIES=	www perl5
MASTER_SITES=	CPAN
PKGNAMEPREFIX=	p5-

MAINTAINER=	perl@FreeBSD.org
COMMENT=	Rudimentary profiling for Template Toolkit

BUILD_DEPENDS=	p5-Template-Toolkit>=0:www/p5-Template-Toolkit
RUN_DEPENDS:=	${BUILD_DEPENDS}

USES=		perl5
USE_PERL5=	configure

.include <bsd.port.mk>
