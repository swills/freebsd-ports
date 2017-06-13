# Created by: clsung
# $FreeBSD: head/devel/p5-Module-Install-TestBase/Makefile 412346 2016-04-01 14:00:51Z mat $

PORTNAME=	Module-Install-TestBase
PORTVERSION=	0.86
PORTREVISION=	1
CATEGORIES=	devel perl5
MASTER_SITES=	CPAN
PKGNAMEPREFIX=	p5-

MAINTAINER=	perl@FreeBSD.org
COMMENT=	Module::Install Support for Test::Base

LICENSE=	ART10 GPLv1
LICENSE_COMB=	dual

BUILD_DEPENDS=	p5-Module-Install>=1.10:devel/p5-Module-Install \
		p5-Test-Base>=0.86:devel/p5-Test-Base
RUN_DEPENDS:=	${BUILD_DEPENDS}

USES=		perl5
USE_PERL5=	configure
NO_ARCH=

.include <bsd.port.mk>
