# Created by: Anton Berezin <tobez@FreeBSD.org>
# $FreeBSD: head/devel/p5-Time-Piece/Makefile 479740 2018-09-13 21:56:06Z sunpoet $

PORTNAME=	Time-Piece
PORTVERSION=	1.3300
CATEGORIES=	devel perl5
MASTER_SITES=	CPAN
PKGNAMEPREFIX=	p5-
DISTNAME=	${PORTNAME}-${PORTVERSION:S|00$||}

MAINTAINER=	perl@FreeBSD.org
COMMENT=	Time::Piece - Object Oriented time objects

LICENSE=	ART10 GPLv1+
LICENSE_COMB=	dual

USES=		perl5
USE_PERL5=	configure

post-install:
	${STRIP_CMD} ${STAGEDIR}${PREFIX}/${SITE_ARCH_REL}/auto/Time/Piece/Piece.so

.include <bsd.port.mk>
