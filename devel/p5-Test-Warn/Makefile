# Created by: Brian Minard <bminard@flatfoot.ca>
# $FreeBSD: head/devel/p5-Test-Warn/Makefile 429327 2016-12-24 11:59:31Z wen $

PORTNAME=	Test-Warn
PORTVERSION=	0.32
CATEGORIES=	devel perl5
MASTER_SITES=	CPAN
PKGNAMEPREFIX=	p5-

MAINTAINER=	perl@FreeBSD.org
COMMENT=	Perl extension to test methods for warnings

LICENSE=	ART10 GPLv1
LICENSE_COMB=	dual

BUILD_DEPENDS=	p5-Sub-Uplevel>=0.12:devel/p5-Sub-Uplevel
RUN_DEPENDS:=	${BUILD_DEPENDS}

NO_ARCH=	yes
USES=		perl5
USE_PERL5=	configure

.include <bsd.port.mk>
