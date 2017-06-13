# Created by: Akinori MUSHA aka knu <knu@idaemons.org>
# $FreeBSD: head/databases/p5-Time-Piece-MySQL/Makefile 412346 2016-04-01 14:00:51Z mat $

PORTNAME=	Time-Piece-MySQL
PORTVERSION=	0.06
PORTREVISION=	1
CATEGORIES=	databases devel perl5
MASTER_SITES=	CPAN
PKGNAMEPREFIX=	p5-

MAINTAINER=	perl@FreeBSD.org
COMMENT=	Time::Piece::MySQL - Adds MySQL-specific methods to Time::Piece

BUILD_DEPENDS=	p5-Time-Piece>=0:devel/p5-Time-Piece
RUN_DEPENDS:=	${BUILD_DEPENDS}

USES=		perl5
USE_PERL5=	configure

.include <bsd.port.mk>
