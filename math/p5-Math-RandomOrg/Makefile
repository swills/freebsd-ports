# Created by: Aaron Dalton <aaron@FreeBSD.org>
# $FreeBSD: head/math/p5-Math-RandomOrg/Makefile 412348 2016-04-01 14:16:16Z mat $

PORTNAME=	Math-RandomOrg
PORTVERSION=	0.04
PORTREVISION=	2
CATEGORIES=	math perl5
MASTER_SITES=	CPAN
PKGNAMEPREFIX=	p5-

MAINTAINER=	bofh@FreeBSD.org
COMMENT=	Retrieve random numbers and data from random.org

LICENSE=	ART10 GPLv1
LICENSE_COMB=	dual

BUILD_DEPENDS=	p5-libwww>=0:www/p5-libwww
RUN_DEPENDS:=	${BUILD_DEPENDS}

USES=		perl5
USE_PERL5=	configure

.include <bsd.port.mk>
