# Created by: Alexey V. Degtyarev
# $FreeBSD: head/devel/p5-MooseX-SemiAffordanceAccessor/Makefile 446749 2017-07-27 15:47:42Z sunpoet $

PORTNAME=	MooseX-SemiAffordanceAccessor
PORTVERSION=	0.10
CATEGORIES=	devel perl5
MASTER_SITES=	CPAN
MASTER_SITE_SUBDIR=	CPAN:DROLSKY
PKGNAMEPREFIX=	p5-

MAINTAINER=	perl@FreeBSD.org
COMMENT=	Name your accessors foo() and set_foo()

LICENSE=	ART20
LICENSE_FILE=	${WRKSRC}/LICENSE

BUILD_DEPENDS=	p5-Moose>=0.94:devel/p5-Moose
RUN_DEPENDS:=	${BUILD_DEPENDS}

NO_ARCH=	yes
USES=		perl5
USE_PERL5=	configure

.include <bsd.port.mk>
