# Created by: Brian Minard <bminard@flatfoot.ca>
# $FreeBSD: head/devel/p5-Test-Warn/Makefile 473135 2018-06-23 14:54:44Z wen $

PORTNAME=	Test-Warn
PORTVERSION=	0.36
CATEGORIES=	devel perl5
MASTER_SITES=	CPAN
PKGNAMEPREFIX=	p5-

MAINTAINER=	perl@FreeBSD.org
COMMENT=	Perl extension to test methods for warnings

LICENSE=	ART10 GPLv1+
LICENSE_COMB=	dual

BUILD_DEPENDS=	p5-Sub-Uplevel>=0.12:devel/p5-Sub-Uplevel
RUN_DEPENDS:=	${BUILD_DEPENDS}

NO_ARCH=	yes
USES=		perl5
USE_PERL5=	configure

.include <bsd.port.mk>
