# Created by: Stefan Pauly <stefan@fh-mainz.de>
# $FreeBSD: head/devel/p5-RRDTool-OO/Makefile 414458 2016-05-02 16:08:56Z zeising $

PORTNAME=	RRDTool-OO
PORTVERSION=	0.36
PORTREVISION=	1
CATEGORIES=	devel perl5
MASTER_SITES=	CPAN
PKGNAMEPREFIX=	p5-

MAINTAINER=	bofh@FreeBSD.org
COMMENT=	RRDTool::OO - Object-oriented interface to RRDTool

LICENSE=	ART10 GPLv1
LICENSE_COMB=	dual

BUILD_DEPENDS=	rrdtool>=0:databases/rrdtool \
		p5-Log-Log4perl>=0.40:devel/p5-Log-Log4perl
RUN_DEPENDS:=	${BUILD_DEPENDS}

USES=		perl5
USE_PERL5=	configure

.include <bsd.port.mk>
