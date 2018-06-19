# Created by: Jason Portwood <jason@iac.net>
# $FreeBSD: head/devel/p5-OLE-Storage_Lite/Makefile 472370 2018-06-14 09:04:32Z amdmi3 $

PORTNAME=	OLE-Storage_Lite
PORTVERSION=	0.19
PORTREVISION=	1
CATEGORIES=	devel perl5
MASTER_SITES=	CPAN
PKGNAMEPREFIX=	p5-

MAINTAINER=	perl@FreeBSD.org
COMMENT=	Perl module for OLE document interface

LICENSE=	ART10 GPLv1+
LICENSE_COMB=	dual

BUILD_DEPENDS=	p5-IO-stringy>=0:devel/p5-IO-stringy
RUN_DEPENDS:=	${BUILD_DEPENDS}

USES=		perl5
USE_PERL5=	configure
NO_ARCH=	yes

.include <bsd.port.mk>
