# Created by: jupengfei <jupengfei@gmail.com>
# $FreeBSD: head/devel/p5-Paranoid/Makefile 481365 2018-10-06 13:06:42Z des $

PORTNAME=	Paranoid
PORTVERSION=	2.06
CATEGORIES=	devel perl5
MASTER_SITES=	CPAN
PKGNAMEPREFIX=	p5-

MAINTAINER=	culot@FreeBSD.org
COMMENT=	Paranoia support for safer programs

LICENSE=	ART10 GPLv1+
LICENSE_COMB=	dual

BUILD_DEPENDS=	${RUN_DEPENDS}
RUN_DEPENDS=	p5-Socket6>=0.23:net/p5-Socket6

NO_ARCH=	yes
USES=		perl5
USE_PERL5=	configure

.include <bsd.port.mk>
