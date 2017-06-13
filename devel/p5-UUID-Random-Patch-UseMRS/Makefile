# Created by: Henk van Oers <hvo.pm@xs4all.nl>
# $FreeBSD: head/devel/p5-UUID-Random-Patch-UseMRS/Makefile 412346 2016-04-01 14:00:51Z mat $

PORTNAME=	UUID-Random-Patch-UseMRS
PORTVERSION=	0.01
PORTREVISION=	1
CATEGORIES=	devel perl5
MASTER_SITES=	CPAN
PKGNAMEPREFIX=	p5-

MAINTAINER=	perl@FreeBSD.org
COMMENT=	Make UUID::Random use Math::Random::Secure::rand()

LICENSE=	ART10 GPLv1
LICENSE_COMB=	dual

BUILD_DEPENDS=	p5-Math-Random-Secure>=0:math/p5-Math-Random-Secure \
		p5-UUID-Random>=0:devel/p5-UUID-Random
RUN_DEPENDS:=	${BUILD_DEPENDS}

USE_PERL5=	modbuild
USES=		perl5

.include <bsd.port.mk>
