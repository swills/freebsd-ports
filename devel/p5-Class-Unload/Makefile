# Created by: Cezary Morga <cm@therek.net>
# $FreeBSD: head/devel/p5-Class-Unload/Makefile 412346 2016-04-01 14:00:51Z mat $

PORTNAME=	Class-Unload
PORTVERSION=	0.09
CATEGORIES=	devel perl5
MASTER_SITES=	CPAN
PKGNAMEPREFIX=	p5-

MAINTAINER=	perl@FreeBSD.org
COMMENT=	Perl5 module for unloading classes

LICENSE=	ART10 GPLv1
LICENSE_COMB=	dual

BUILD_DEPENDS=	p5-Class-Inspector>=0:devel/p5-Class-Inspector
RUN_DEPENDS:=	${BUILD_DEPENDS}

NO_ARCH=	yes
USES=		perl5
USE_PERL5=	configure

.include <bsd.port.mk>
