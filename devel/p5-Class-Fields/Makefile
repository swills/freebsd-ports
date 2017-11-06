# Created by: Sergei Vyshenski
# $FreeBSD: head/devel/p5-Class-Fields/Makefile 453577 2017-11-05 21:17:31Z sunpoet $

PORTNAME=	Class-Fields
PORTVERSION=	0.204
CATEGORIES=	devel perl5
MASTER_SITES=	CPAN
PKGNAMEPREFIX=	p5-

MAINTAINER=	svysh.fbsd@gmail.com
COMMENT=	Functions/methods for examining data members of a class

LICENSE=	ART10 GPLv1+
LICENSE_COMB=	dual

BUILD_DEPENDS=	p5-Carp-Assert>=0:devel/p5-Carp-Assert
RUN_DEPENDS:=	${BUILD_DEPENDS}

NO_ARCH=	yes
USES=		perl5
USE_PERL5=	configure

.include <bsd.port.mk>
