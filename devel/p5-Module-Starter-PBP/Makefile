# Created by: Lars Thegler <lth@FreeBSD.org>
# $FreeBSD: head/devel/p5-Module-Starter-PBP/Makefile 437950 2017-04-07 18:50:22Z lth $

PORTNAME=	Module-Starter-PBP
PORTVERSION=	0.0.3
DISTVERSIONPREFIX=	v
PORTREVISION=	2
CATEGORIES=	devel perl5
MASTER_SITES=	CPAN
PKGNAMEPREFIX=	p5-

MAINTAINER=	perl@FreeBSD.org
COMMENT=	Create a module as recommended in "Perl Best Practices"

LICENSE=	ART10 GPLv1
LICENSE_COMB=	dual

BUILD_DEPENDS=	p5-Module-Starter>=0:devel/p5-Module-Starter
RUN_DEPENDS:=	${BUILD_DEPENDS}

USES=		perl5
USE_PERL5=	configure

.include <bsd.port.mk>
