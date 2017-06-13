# Created by: Geoffroy Desvernay <dgeo@centrale-marseille.fr>
# $FreeBSD: head/devel/p5-App-local-lib-helper/Makefile 412346 2016-04-01 14:00:51Z mat $

PORTNAME=	App-local-lib-helper
PORTVERSION=	0.07
CATEGORIES=	devel perl5
MASTER_SITES=	CPAN
PKGNAMEPREFIX=	p5-

MAINTAINER=	dgeo@centrale-marseille.fr
COMMENT=	Make it easy to run code against a local-lib

LICENSE=	ART10 GPLv1
LICENSE_COMB=	dual

BUILD_DEPENDS:=	p5-local-lib>=2.000004:devel/p5-local-lib
RUN_DEPENDS:=	${BUILD_DEPENDS}

USES=		perl5
USE_PERL5=	configure

.include <bsd.port.mk>
