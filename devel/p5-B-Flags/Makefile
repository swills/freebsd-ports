# Created by: Sergei Vyshenski <svysh.fbsd@gmail.com>
# $FreeBSD: head/devel/p5-B-Flags/Makefile 429126 2016-12-21 20:47:07Z sunpoet $

PORTNAME=	B-Flags
PORTVERSION=	0.16
CATEGORIES=	devel perl5
MASTER_SITES=	CPAN
MASTER_SITE_SUBDIR=	CPAN:RURBAN
PKGNAMEPREFIX=	p5-

MAINTAINER=	svysh.fbsd@gmail.com
COMMENT=	Friendlier flags for B

LICENSE=	ART10 GPLv1
LICENSE_COMB=	dual

USES=		perl5
USE_PERL5=	configure

post-install:
	${STRIP_CMD} ${STAGEDIR}${PREFIX}/${SITE_ARCH_REL}/auto/B/Flags/Flags.so

.include <bsd.port.mk>
