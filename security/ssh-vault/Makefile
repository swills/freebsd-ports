# $FreeBSD$

PORTNAME=	ssh-vault
PORTVERSION=	0.12.6
PORTREVISION=	0
CATEGORIES=	security

MAINTAINER=	nbari@tequila.io
COMMENT=	Encrypt/decrypt using ssh keys

LICENSE=	BSD3CLAUSE
LICENSE_FILE=	${WRKSRC}/LICENSE

USES=		go

USE_GITHUB=	yes
GH_TUPLE=	golang:crypto:a0c6ece:gocrypto/vendor/golang.org/x/crypto \
		golang:sys:d101bd2:gosys/vendor/golang.org/x/sys \
		ssh-vault:crypto:3700ed0:crypto/vendor/github.com/ssh-vault/crypto \
		ssh-vault:ssh2pem:fdda4b3:ssh2pem/vendor/github.com/ssh-vault/ssh2pem

GH_SUBDIR=	src/github.com/${PORTNAME}/${PORTNAME}
GO_BUILDFLAGS=	-ldflags "-s -w -X main.version=${PORTVERSION}"
GO_TARGET=	./cmd/ssh-vault

PLIST_FILES=	bin/ssh-vault

.include <bsd.port.mk>
