# Created by: chinsan <chinsan.tw@gmail.com>
# $FreeBSD: head/databases/p5-RRD-Simple/Makefile 414458 2016-05-02 16:08:56Z zeising $

PORTNAME=	RRD-Simple
PORTVERSION=	1.44
PORTREVISION=	7
CATEGORIES=	databases perl5
MASTER_SITES=	CPAN/Proc/NICOLAW
PKGNAMEPREFIX=	p5-

MAINTAINER=	perl@FreeBSD.org
COMMENT=	Simple interface to create and store data in RRD files

BUILD_DEPENDS=	rrdtool:databases/rrdtool
RUN_DEPENDS:=	${BUILD_DEPENDS}

USES=		perl5
USE_PERL5=	modbuild

.include <bsd.port.mk>
