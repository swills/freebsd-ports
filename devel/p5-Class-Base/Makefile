# Created by: Lars Thegler <lars@thegler.dk>
# $FreeBSD: head/devel/p5-Class-Base/Makefile 458196 2018-01-06 04:33:21Z sunpoet $

PORTNAME=	Class-Base
PORTVERSION=	0.09
CATEGORIES=	devel perl5
MASTER_SITES=	CPAN
PKGNAMEPREFIX=	p5-

MAINTAINER=	perl@FreeBSD.org
COMMENT=	Useful base class for deriving other modules

LICENSE=	ART10 GPLv1+
LICENSE_COMB=	dual

BUILD_DEPENDS=	p5-Clone>=0:devel/p5-Clone
RUN_DEPENDS:=	${BUILD_DEPENDS}

NO_ARCH=	yes
USES=		perl5
USE_PERL5=	configure

.include <bsd.port.mk>
