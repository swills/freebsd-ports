# Created by: Aaron Dalton <aaron@FreeBSD.org>
# $FreeBSD: head/security/p5-Authen-Simple-SMB/Makefile 471682 2018-06-04 18:14:38Z sunpoet $

PORTNAME=	Authen-Simple-SMB
PORTVERSION=	0.1
PORTREVISION=	1
CATEGORIES=	security perl5
MASTER_SITES=	CPAN
PKGNAMEPREFIX=	p5-

MAINTAINER=	perl@FreeBSD.org
COMMENT=	Simple SMB authentication

LICENSE=	ART10 GPLv1+
LICENSE_COMB=	dual

BUILD_DEPENDS=	p5-Authen-Simple>=0:security/p5-Authen-Simple \
		p5-Authen-Smb>=0:security/p5-Authen-Smb
RUN_DEPENDS:=	${BUILD_DEPENDS}

USES=		perl5
USE_PERL5=	modbuild

.include <bsd.port.mk>
