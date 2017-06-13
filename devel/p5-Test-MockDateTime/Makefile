# $FreeBSD: head/devel/p5-Test-MockDateTime/Makefile 426085 2016-11-14 06:24:05Z pi $

PORTNAME=	Test-MockDateTime
PORTVERSION=	0.02
CATEGORIES=	devel perl5
MASTER_SITES=	CPAN
PKGNAMEPREFIX=	p5-

MAINTAINER=	hvo.pm@xs4all.nl
COMMENT=	Mock DateTime->now calls during tests

LICENSE=	ART10 GPLv1
LICENSE_COMB=	dual

BUILD_DEPENDS=	p5-DateTime-Format-DateParse>=0:devel/p5-DateTime-Format-DateParse
RUN_DEPENDS:=	${BUILD_DEPENDS}

USES=		perl5
USE_PERL5=	configure
NO_ARCH=	yes

.include <bsd.port.mk>
