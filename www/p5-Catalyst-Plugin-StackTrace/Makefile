# Created by: Lars Balker Rasmussen <lbr@FreeBSD.org>
# $FreeBSD: head/www/p5-Catalyst-Plugin-StackTrace/Makefile 412351 2016-04-01 14:33:55Z mat $

PORTNAME=	Catalyst-Plugin-StackTrace
PORTVERSION=	0.12
PORTREVISION=	1
CATEGORIES=	www perl5
MASTER_SITES=	CPAN
PKGNAMEPREFIX=	p5-

MAINTAINER=	perl@FreeBSD.org
COMMENT=	Display a stack trace on the debug screen

LICENSE=	ART10 GPLv1
LICENSE_COMB=	dual

BUILD_DEPENDS=	p5-Catalyst-Runtime>=5.7000:www/p5-Catalyst-Runtime \
		p5-Devel-StackTrace>=0:devel/p5-Devel-StackTrace \
		p5-MRO-Compat>=0.10:devel/p5-MRO-Compat
RUN_DEPENDS:=	${BUILD_DEPENDS}

USES=		perl5
USE_PERL5=	configure

.include <bsd.port.mk>
