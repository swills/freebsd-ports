# Created by: Anes Mukhametov <anes@anes.su>
# $FreeBSD: head/archivers/p5-Archive-Any-Plugin-Rar/Makefile 451676 2017-10-10 11:19:47Z sunpoet $

PORTNAME=	Archive-Any-Plugin-Rar
PORTVERSION=	0.02
PORTREVISION=	1
CATEGORIES=	archivers perl5
MASTER_SITES=	CPAN
PKGNAMEPREFIX=	p5-

MAINTAINER=	anes@anes.su
COMMENT=	Wrapper around Archive::Rar

LICENSE=	ART10 GPLv1+
LICENSE_COMB=	dual

BUILD_DEPENDS=	p5-Archive-Any>=0:archivers/p5-Archive-Any \
		p5-Archive-Rar>=0:archivers/p5-Archive-Rar \
		p5-lib-abs>=0.90:devel/p5-lib-abs
RUN_DEPENDS:=	${BUILD_DEPENDS}

USES=		perl5
USE_PERL5=	configure
NO_ARCH=	yes

.include <bsd.port.mk>
