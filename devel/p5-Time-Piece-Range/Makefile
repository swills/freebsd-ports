# Created by: Zach Thompson <hideo@lastamericanempire.com>
# $FreeBSD: head/devel/p5-Time-Piece-Range/Makefile 444154 2017-06-22 23:42:39Z sunpoet $

PORTNAME=	Time-Piece-Range
PORTVERSION=	1.2
PORTREVISION=	1
CATEGORIES=	devel perl5
MASTER_SITES=	CPAN
PKGNAMEPREFIX=	p5-

MAINTAINER=	perl@FreeBSD.org
COMMENT=	Time::Piece::Range - deal with a range of Time::Piece objects

LICENSE=	GPLv2+

BUILD_DEPENDS=	p5-Date-Range>=0:devel/p5-Date-Range
RUN_DEPENDS:=	${BUILD_DEPENDS}

NO_ARCH=	yes
USES=		perl5
USE_PERL5=	configure

.include <bsd.port.mk>
