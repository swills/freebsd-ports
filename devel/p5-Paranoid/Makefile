# Created by: jupengfei <jupengfei@gmail.com>
# $FreeBSD: head/devel/p5-Paranoid/Makefile 447071 2017-08-01 19:06:08Z culot $

PORTNAME=	Paranoid
PORTVERSION=	2.05
CATEGORIES=	devel perl5
MASTER_SITES=	CPAN
PKGNAMEPREFIX=	p5-

MAINTAINER=	culot@FreeBSD.org
COMMENT=	Paranoia support for safer programs

LICENSE=	ART10 GPLv1
LICENSE_COMB=	dual

BUILD_DEPENDS=	p5-Socket6>=0.23:net/p5-Socket6
RUN_DEPENDS:=	${BUILD_DEPENDS}

USES=		perl5
USE_PERL5=	configure

.include <bsd.port.mk>
