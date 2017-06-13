# Created by: Denis Shaposhnikov <dsh@vlink.ru>
# $FreeBSD: head/devel/p5-Class-Container/Makefile 412346 2016-04-01 14:00:51Z mat $

PORTNAME=	Class-Container
PORTVERSION=	0.12
PORTREVISION=	1
CATEGORIES=	devel perl5
MASTER_SITES=	CPAN
PKGNAMEPREFIX=	p5-

MAINTAINER=	dsh@vlink.ru
COMMENT=	Glues object frameworks together transparently

BUILD_DEPENDS=	p5-Params-Validate>=0:devel/p5-Params-Validate
RUN_DEPENDS:=	${BUILD_DEPENDS}

USES=		perl5
USE_PERL5=	configure

.include <bsd.port.mk>
