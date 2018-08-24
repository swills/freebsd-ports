# Created by: ache@FreeBSD.org
# $FreeBSD: head/databases/p5-MLDBM/Makefile 477710 2018-08-21 09:08:08Z amdmi3 $

PORTNAME=	MLDBM
PORTVERSION=	2.05
PORTREVISION=	1
CATEGORIES=	databases perl5
MASTER_SITES=	CPAN
PKGNAMEPREFIX=	p5-

MAINTAINER=	perl@FreeBSD.org
COMMENT=	Store multi-level hash structure in single level tied hash

LICENSE=	ART10 GPLv1+
LICENSE_COMB=	dual

BUILD_DEPENDS=	p5-FreezeThaw>=0:devel/p5-FreezeThaw
RUN_DEPENDS:=	${BUILD_DEPENDS}

USES=		perl5
USE_PERL5=	configure
NO_ARCH=	yes

.include <bsd.port.mk>
