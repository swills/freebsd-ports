# Created by: Martin Tournoij <carpetsmoker@gmail.com>
# $FreeBSD: head/devel/p5-Config-ApacheFormat/Makefile 449893 2017-09-15 08:58:46Z mat $

PORTNAME=	Config-ApacheFormat
PORTVERSION=	1.2
PORTREVISION=	2
CATEGORIES=	devel perl5
MASTER_SITES=	CPAN
PKGNAMEPREFIX=	p5-

MAINTAINER=	bofh@FreeBSD.org
COMMENT=	Parse a configuration file in the same syntax as the Apache web server

LICENSE=	ART10 GPLv1+
LICENSE_COMB=	dual

BUILD_DEPENDS=	p5-Class-MethodMaker>=0:devel/p5-Class-MethodMaker
RUN_DEPENDS:=	${BUILD_DEPENDS}

USES=		perl5
USE_PERL5=	configure

.include <bsd.port.mk>
