# $FreeBSD: head/net/rubygem-ruby_smb/Makefile 442471 2017-06-03 10:26:21Z antoine $

PORTNAME=	ruby_smb
PORTVERSION=	0.0.18
CATEGORIES=	net rubygems
MASTER_SITES=	RG

MAINTAINER=	antoine@FreeBSD.org
COMMENT=	Message creator and parser for the SMB protocol family

LICENSE=	BSD3CLAUSE
LICENSE_FILE=	${WRKSRC}/LICENSE.txt

RUN_DEPENDS=	rubygem-bindata>=0:devel/rubygem-bindata \
		rubygem-rubyntlm>=0:net/rubygem-rubyntlm \
		rubygem-windows_error>=0:devel/rubygem-windows_error

NO_ARCH=	yes

USE_RUBY=	yes
USES=		gem

.include <bsd.port.mk>
