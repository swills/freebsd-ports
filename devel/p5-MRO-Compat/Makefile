# Created by: lbr
# $FreeBSD: head/devel/p5-MRO-Compat/Makefile 481365 2018-10-06 13:06:42Z des $

PORTNAME=	MRO-Compat
PORTVERSION=	0.13
CATEGORIES=	devel perl5
MASTER_SITES=	CPAN
MASTER_SITE_SUBDIR=	CPAN:HAARG
PKGNAMEPREFIX=	p5-

MAINTAINER=	perl@FreeBSD.org
COMMENT=	Add mro::* interface compatibility for Perls < 5.9.5

LICENSE=	ART10 GPLv1+
LICENSE_COMB=	dual

BUILD_DEPENDS=	${RUN_DEPENDS}
RUN_DEPENDS=	p5-Class-C3>=0.19:devel/p5-Class-C3

NO_ARCH=	yes
USES=		perl5
USE_PERL5=	configure

.include <bsd.port.mk>
