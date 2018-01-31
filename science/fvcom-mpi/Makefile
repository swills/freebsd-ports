# $FreeBSD: head/science/fvcom-mpi/Makefile 460452 2018-01-31 01:07:07Z jwb $

PORTREVISION=	10
PKGNAMESUFFIX=	-openmpi

MPIPREFIX=	mpi/openmpi/

MAINTAINER=	jwb@FreeBSD.org

LIB_DEPENDS+=	libmpi.so:net/openmpi

MASTERDIR=	${.CURDIR}/../fvcom

MAKE_ARGS+=	FC=${LOCALBASE}/${MPIPREFIX}bin/mpif90 \
		PORT_CPP_FLAGS+=-DMULTIPROCESSOR

.include "${MASTERDIR}/Makefile"
