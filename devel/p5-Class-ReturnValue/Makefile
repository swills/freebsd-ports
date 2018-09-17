# Created by: tobez
# $FreeBSD: head/devel/p5-Class-ReturnValue/Makefile 479390 2018-09-10 11:16:59Z des $

PORTNAME=	Class-ReturnValue
PORTVERSION=	0.55
PORTREVISION=	1
CATEGORIES=	devel perl5
MASTER_SITES=	CPAN
PKGNAMEPREFIX=	p5-

MAINTAINER=	perl@FreeBSD.org
COMMENT=	Return-value object that can be treated as a boolean, array, or object

BUILD_DEPENDS=	p5-Devel-StackTrace>=0:devel/p5-Devel-StackTrace
RUN_DEPENDS:=	${BUILD_DEPENDS}

USES=		perl5
USE_PERL5=	configure

.include <bsd.port.mk>
